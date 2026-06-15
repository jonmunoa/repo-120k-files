// fichero 19721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19721;

Registro19721 crear_registro19721(int id) {
    Registro19721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
