// fichero 35437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35437;

Registro35437 crear_registro35437(int id) {
    Registro35437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
