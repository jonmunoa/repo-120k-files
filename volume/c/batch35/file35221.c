// fichero 35221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35221;

Registro35221 crear_registro35221(int id) {
    Registro35221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
