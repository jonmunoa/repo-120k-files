// fichero 6225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6225;

Registro6225 crear_registro6225(int id) {
    Registro6225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
