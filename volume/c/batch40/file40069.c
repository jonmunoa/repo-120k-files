// fichero 40069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40069;

Registro40069 crear_registro40069(int id) {
    Registro40069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
