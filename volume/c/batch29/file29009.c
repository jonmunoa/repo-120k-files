// fichero 29009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29009;

Registro29009 crear_registro29009(int id) {
    Registro29009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
