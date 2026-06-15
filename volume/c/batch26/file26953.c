// fichero 26953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26953;

Registro26953 crear_registro26953(int id) {
    Registro26953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
