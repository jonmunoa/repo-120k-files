// fichero 35913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35913;

Registro35913 crear_registro35913(int id) {
    Registro35913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
