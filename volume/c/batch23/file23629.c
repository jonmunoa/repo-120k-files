// fichero 23629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23629;

Registro23629 crear_registro23629(int id) {
    Registro23629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
