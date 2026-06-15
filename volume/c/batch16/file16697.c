// fichero 16697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16697;

Registro16697 crear_registro16697(int id) {
    Registro16697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
