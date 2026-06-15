// fichero 40209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40209;

Registro40209 crear_registro40209(int id) {
    Registro40209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
