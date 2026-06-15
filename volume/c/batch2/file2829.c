// fichero 2829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2829;

Registro2829 crear_registro2829(int id) {
    Registro2829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
