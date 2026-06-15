// fichero 40733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40733;

Registro40733 crear_registro40733(int id) {
    Registro40733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
