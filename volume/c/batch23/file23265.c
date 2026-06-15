// fichero 23265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23265;

Registro23265 crear_registro23265(int id) {
    Registro23265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
