// fichero 41793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41793;

Registro41793 crear_registro41793(int id) {
    Registro41793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
