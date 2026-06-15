// fichero 23041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23041;

Registro23041 crear_registro23041(int id) {
    Registro23041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
