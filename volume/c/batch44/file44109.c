// fichero 44109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44109;

Registro44109 crear_registro44109(int id) {
    Registro44109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
