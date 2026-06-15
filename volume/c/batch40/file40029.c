// fichero 40029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40029;

Registro40029 crear_registro40029(int id) {
    Registro40029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
