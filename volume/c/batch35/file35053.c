// fichero 35053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35053;

Registro35053 crear_registro35053(int id) {
    Registro35053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
