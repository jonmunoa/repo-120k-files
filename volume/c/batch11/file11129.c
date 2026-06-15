// fichero 11129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11129;

Registro11129 crear_registro11129(int id) {
    Registro11129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
