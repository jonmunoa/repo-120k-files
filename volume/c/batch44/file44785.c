// fichero 44785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44785;

Registro44785 crear_registro44785(int id) {
    Registro44785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
