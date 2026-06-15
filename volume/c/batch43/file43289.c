// fichero 43289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43289;

Registro43289 crear_registro43289(int id) {
    Registro43289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
