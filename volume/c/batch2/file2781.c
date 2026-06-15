// fichero 2781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2781;

Registro2781 crear_registro2781(int id) {
    Registro2781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
