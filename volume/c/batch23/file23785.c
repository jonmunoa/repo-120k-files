// fichero 23785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23785;

Registro23785 crear_registro23785(int id) {
    Registro23785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
