// fichero 5001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5001;

Registro5001 crear_registro5001(int id) {
    Registro5001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
