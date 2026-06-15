// fichero 20017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20017;

Registro20017 crear_registro20017(int id) {
    Registro20017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
