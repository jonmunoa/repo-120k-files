// fichero 29645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29645;

Registro29645 crear_registro29645(int id) {
    Registro29645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
