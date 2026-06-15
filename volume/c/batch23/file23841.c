// fichero 23841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23841;

Registro23841 crear_registro23841(int id) {
    Registro23841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
