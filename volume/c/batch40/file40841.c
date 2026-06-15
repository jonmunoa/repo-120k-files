// fichero 40841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40841;

Registro40841 crear_registro40841(int id) {
    Registro40841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
