// fichero 40101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40101;

Registro40101 crear_registro40101(int id) {
    Registro40101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
