// fichero 47625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47625;

Registro47625 crear_registro47625(int id) {
    Registro47625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
