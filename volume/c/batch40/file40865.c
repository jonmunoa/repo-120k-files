// fichero 40865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40865;

Registro40865 crear_registro40865(int id) {
    Registro40865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
