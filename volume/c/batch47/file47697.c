// fichero 47697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47697;

Registro47697 crear_registro47697(int id) {
    Registro47697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
