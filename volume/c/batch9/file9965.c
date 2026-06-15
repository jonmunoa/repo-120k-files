// fichero 9965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9965;

Registro9965 crear_registro9965(int id) {
    Registro9965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
