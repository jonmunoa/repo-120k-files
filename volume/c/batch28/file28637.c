// fichero 28637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28637;

Registro28637 crear_registro28637(int id) {
    Registro28637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
