// fichero 11221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11221;

Registro11221 crear_registro11221(int id) {
    Registro11221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
