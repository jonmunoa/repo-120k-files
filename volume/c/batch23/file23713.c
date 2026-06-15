// fichero 23713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23713;

Registro23713 crear_registro23713(int id) {
    Registro23713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
