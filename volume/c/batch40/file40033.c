// fichero 40033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40033;

Registro40033 crear_registro40033(int id) {
    Registro40033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
