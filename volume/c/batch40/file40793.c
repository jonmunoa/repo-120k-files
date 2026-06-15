// fichero 40793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40793;

Registro40793 crear_registro40793(int id) {
    Registro40793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
