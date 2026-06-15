// fichero 2809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2809;

Registro2809 crear_registro2809(int id) {
    Registro2809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
