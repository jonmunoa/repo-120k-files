// fichero 9165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9165;

Registro9165 crear_registro9165(int id) {
    Registro9165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
