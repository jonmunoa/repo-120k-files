// fichero 23293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23293;

Registro23293 crear_registro23293(int id) {
    Registro23293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
