// fichero 40497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40497;

Registro40497 crear_registro40497(int id) {
    Registro40497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
