// fichero 23637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23637;

Registro23637 crear_registro23637(int id) {
    Registro23637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
