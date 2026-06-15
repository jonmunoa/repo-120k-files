// fichero 18645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18645;

Registro18645 crear_registro18645(int id) {
    Registro18645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
