// fichero 11289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11289;

Registro11289 crear_registro11289(int id) {
    Registro11289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
