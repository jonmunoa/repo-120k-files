// fichero 2841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2841;

Registro2841 crear_registro2841(int id) {
    Registro2841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
