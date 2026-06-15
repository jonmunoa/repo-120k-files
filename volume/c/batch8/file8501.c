// fichero 8501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8501;

Registro8501 crear_registro8501(int id) {
    Registro8501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
