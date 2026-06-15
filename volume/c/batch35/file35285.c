// fichero 35285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35285;

Registro35285 crear_registro35285(int id) {
    Registro35285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
