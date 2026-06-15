// fichero 11765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11765;

Registro11765 crear_registro11765(int id) {
    Registro11765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
