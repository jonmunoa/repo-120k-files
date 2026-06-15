// fichero 2637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2637;

Registro2637 crear_registro2637(int id) {
    Registro2637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
