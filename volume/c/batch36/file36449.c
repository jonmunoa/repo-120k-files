// fichero 36449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36449;

Registro36449 crear_registro36449(int id) {
    Registro36449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
