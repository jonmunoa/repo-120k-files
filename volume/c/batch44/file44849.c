// fichero 44849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44849;

Registro44849 crear_registro44849(int id) {
    Registro44849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
