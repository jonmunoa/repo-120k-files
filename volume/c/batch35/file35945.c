// fichero 35945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35945;

Registro35945 crear_registro35945(int id) {
    Registro35945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
