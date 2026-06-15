// fichero 23905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23905;

Registro23905 crear_registro23905(int id) {
    Registro23905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
