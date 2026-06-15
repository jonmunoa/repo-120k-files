// fichero 9809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9809;

Registro9809 crear_registro9809(int id) {
    Registro9809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
